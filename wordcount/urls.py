from django.urls import path
from . import views

#from django.contrib import admin
#from django.urls import path

urlpatterns = [
    path('', views.homepage,name='home'),
    path('about/',views.about,name='about'),
    path('count/', views.count, name='count'),
    path('contact/', views.contact, name='contact')
]
