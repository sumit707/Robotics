from django.http import HttpResponse
from django.shortcuts import render
import operator

def homepage(request):
    return render(request, 'home.html')


def about(request):
    return render(request, 'about.html')

def contact(request):
    return render(request, 'contact.html')

def count(request):
    data=request.GET['fulltextarea']
    word_list=data.split()
    list_length=len(word_list)

    worddictionary={}
    for word in worddictionary:
        if word in worddictionary:
            worddictionary[word]+=1
        else:
            worddictionary[word]=1

    sorted_list=sorted(worddictionary.items(),key=operator.itemgetter(1),reverse=True)
    return render(request, 'count.html',{'fulltext':data,'words':list_length,'worddictionary':sorted_list})
