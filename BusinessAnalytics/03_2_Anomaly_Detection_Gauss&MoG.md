# Anomaly Detection_Gauss & MoG

## 1. Density-based Novelty Detection
- 현재 나에게 주어진 데이터를 활용해서 정상상태의 데이터가 가질 수 있는 분포를 먼저 추정하고 추정된 분포를 통해서 새로운 객체가 들어왔을 때 그 객체가 발생할 확률이 높으면 Normal data로 그렇지 않으면 abnormal data로 판별한다.
- ![image](https://user-images.githubusercontent.com/58695532/113004953-fd017400-91ae-11eb-8460-23d581154dd8.png)
- Gaussian Density Estimation : 다차원 데이터에 대해서 Modal의 개수가 1개인 경우
- Mixture of Gaussian Density Estimation : Modal의 개수가 1개 보다 크지만 객체 수 보다 적은 경우
- Kernel Density Estimation : Modal의 개수와 학습데이터에 표현되는 객체의 개수가 같은 경우
- ![image](https://user-images.githubusercontent.com/58695532/113005015-0985cc80-91af-11eb-9c9b-2be4f724c62f.png)


### Gaussian Density Estimation
- 관측치들은 하나의 가우시안 분포로 부터 샘플링이 되어있다고 가정한다.
- Log(Likelihood function)을 μ(뮤)로 편미분 = Train Data의 Normal example의 평균
- Log(Likelihood function)을 γ(감마)로 편미분 = Train Data의 Normal example의 분산
- 결국은 최적화 식을 통해서 주어진 데이터를 가장 잘 생성해 낼 수 있는 가우시안 분포는 평균은 현재 데이터의 평균값, 분산은 현재 데이터의 분산값을 가지고 있을 때가 가장 최적임을 알 수 있다.

### Mixture of Gaussian Density Estimation
- Gaussian Density의 가정은 매우 엄격하여 좀더 현실성 있게 unimodal을 multi-modal로 완화해준게 MoG 이다.
- 따라서 single bias의 Gaussian Density 보다 좀더 정확한 추정을 할 수 있지만 훨씬 더 많은 개수의 데이터가 필요하다.
- 이상치 score라 함은 새로운 데이터의 확률분포값이다. anomaly score = 1 - p(x)
- 최적화 방법론 중에 가장 많이 사용되는 Expectation-Maximization Algorithm
  - E-Step : B(Gaussian)을 고정시킨 상태에서 가우시안에 각각의 객체가 속할 확률을 추정하는 단계
  - M-Step : 객체의 확률을 고정시켜 놓고 Gaussian에 대한 parameter를 update하는 단계
  - 이 두가지 step을 반복하다 보면 언젠가 A, B가 불변(수렴)하는 구간에 도달하고 미지수 (w, μ, ∑)를 찾을 수 있다.
  - The shape of MoG according to the covariance matrix (현실적인 대안은 Diagonal이 적절하다)
  - ![image](https://user-images.githubusercontent.com/58695532/113026676-4ad4a700-91c4-11eb-8b02-dc1083d2118b.png)


<출처 : https://www.youtube.com/watch?v=kKZM8bxwQbA&list=PLetSlH8YjIfWMdw9AuLR5ybkVvGcoG2EW&index=16 >
