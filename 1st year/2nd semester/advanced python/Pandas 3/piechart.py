import matplotlib.pyplot as plt
slices=[50,25,15,15]
depts=['Sales','Production','HR','Finance']
cols=['magenta','cyan','gold','brown']
plt.pie(slices, labels=depts,colors=cols,startangle=90,explode=(0,0.2,0,0),shadow=True,autopct='%.1f%%')
plt.title('Wipro')
plt.legend()
plt.show()