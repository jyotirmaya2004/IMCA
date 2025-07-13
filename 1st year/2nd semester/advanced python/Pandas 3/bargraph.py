import pandas as pd
import matplotlib.pyplot as plt
dataset={'Student_Year':['Year1','Year2','Year3','Year4','Year5'],
		 'Pass percentage':[65,75,78,45,35]}
dframe=pd.DataFrame(dataset)
dframe.plot.bar(x='Student_Year',y='Pass percentage',title='Result analysis',rot=50,color="#00D4FF")
plt.show() #display the plot in the line graph