#data preprocessing
#import library
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
#reading CSV
data_set = pd.read_csv('Data.csv')

#making the matrices of features and dependent var
data_X = data_set.iloc[:,:-1]
data_Y = data_set.iloc[:,3]

#for missing data
from sklearn.impute import SimpleImputer
missingvalues = SimpleImputer(missing_values = np.nan, strategy = 'most_frequent', verbose = 0)
data_X[:, 1:3] = missingvalues.fit_transform(data_X[:, 1:3])

from sklearn.preprocessing import OneHotEncoder,LabelEncoder
#catorigical data,maths problem
label_X = LabelEncoder()
data_X[:,0] = label_X.fit_transform(data_X[:,0])

#dummy variable 

ohe = OneHotEncoder(categorical_features=[0])
data_X = ohe.fit_transform(data_X).toarray()

data_Y = LabelEncoder().fit_transform(data_Y)
print(data_Y)


#traning and test set
from sklearn.model_selection import train_test_split
#                                                   [ dataset ]   [testsize:trainset]                           
X_train, X_test, Y_train, Y_test = train_test_split(data_X,data_Y,test_size = 0.2)

#feature_Scaling
from sklearn.preprocessing import StandardScaler
sc_X = StandardScaler()
X_train = sc_X.fit_transform(X_train)
X_test = sc_X.transform(X_test)
sc_y = StandardScaler()
Y_train = sc_y.fit_transform(Y_train.reshape(-1,1))