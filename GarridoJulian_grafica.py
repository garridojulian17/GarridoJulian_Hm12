import numpy as np
import matplotlib.pyplot as plt



data = np.loadtxt("Advection.dat")


Ax = data[,:0]
Ay = data[,:1]



plt.plot(Ax,Ay)
plt.xlabel(Ax)
plt.ylabel(Ay)
plt.savefig("advection.png")
