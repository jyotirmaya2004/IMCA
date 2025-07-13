import pandas as pd
import matplotlib.pyplot as plt
dataset={'Year':[2020,2021,2022,2023,2024],
		 'Covid data':[25,35,17,20,18],
		 'Heart disease':[80,95,70,115,140]}
dframe=pd.DataFrame(dataset)
dframe.plot(x='Year',y=['Covid data','Heart disease'],title='Infected people over time')
plt.show() #display the plot in the line graph