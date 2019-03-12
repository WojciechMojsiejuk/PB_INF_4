import pandas as pd
df = pd.read_csv("MK.csv")
df.loc[df['Plec'] == 'z','Plec']=1 #kobiety-1 mezczyzni 0
df.loc[df['Plec'] == 'm','Plec']=0
df.loc[df['Wystep'] == 'nie','Wystep']=0
df.loc[df['Wystep'] == 'tak','Wystep']=1
df.loc[df['Rodzaj'] == 'KIT_IIT','Rodzaj']=1
df.loc[df['Rodzaj'] == 'KIT','Rodzaj']=0

df.loc[df['Infekcje'] == 'tak','Infekcje']=1
df.loc[df['Infekcje'] == 'nie','Infekcje']=0
df.loc[df['Remisja'] == 'tak','Remisja']=1
df.loc[df['Remisja'] == 'nie','Remisja']=0
df.loc[df['NT'] == 'tak','NT']=1
df.loc[df['NT'] == 'nie','NT']=0
df.loc[df['Mc'] == '<3','Mc']=0
df.loc[df['Mc'] == '3-97','Mc']=0.5
df.loc[df['Mc'] == '>97','Mc']=1
df.loc[df['Ch'] == 'tak','Ch']=1
df.loc[df['Ch'] == 'nie','Ch']=0
df.loc[df['TG'] == 'tak','TG']=1
df.loc[df['TG'] == 'nie','TG']=0
df.loc[df['Mikroalbuminuria'] == 'tak','Mikroalbuminuria']=1
df.loc[df['Mikroalbuminuria'] == 'nie','Mikroalbuminuria']=0

print(df)
df.to_csv('MKbin.csv',index=False,header=False)