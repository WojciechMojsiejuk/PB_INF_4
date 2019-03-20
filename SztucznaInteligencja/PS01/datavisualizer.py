import numpy as np 
import matplotlib.pyplot as plt

values= np.random.normal(0,1, 10000)
plt.hist(values,300)
plt.xticks([-2,-1,-0.2,0.4,1,2],('8','10','12','14','16','18'))
plt.xlabel('Godzina')
top=110
plt.yticks([0,top/4,top/2,3*top/4,top],('0%','25%','50%','75%','100%'))
plt.ylabel('Determinacja pójścia na wykład')
plt.show()
