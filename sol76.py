#data preprocessing
#import library
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

#reading CSV
data_set = pd.read_csv('Data.csv')
#making the matrices of features and dependent var
X = data_set.iloc[:,:-1].values
Y = data_set.iloc[:,3].values
#for missing data
from sklearn.impute import SimpleImputer
imputer = SimpleImputer(missing_values =np.nan,strategy = 
                        'most_frequent')
X[:,1:3] = imputer.fit(X[:,1:3]).transform(X[:,1:3])

#Categorial Data
from sklearn.preprocessing import LabelEncoder,OneHotEncoder
'''
   label diff types of data as ML is about maths ,
   so we need to from our data in equations.
   So is may have some problems if we had words 
   inspite of numbers.
'''
labelencoder_X = LabelEncoder()
X[:,0] = labelencoder_X.fit_transform(X[:,0])
'''
Dummy Encoding
here we have encoded variable into numbers,
but these number dosn't cay 0 is smaller then 1 or 2 ,
so we make dummy variables.'''
onehotencoder = OneHotEncoder(categorical_features = [0])
X = onehotencoder.fit_transform(X[0])