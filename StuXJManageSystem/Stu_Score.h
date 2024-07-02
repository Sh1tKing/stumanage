#pragma once
#include<iostream>
#include<string>
using namespace std;
class Score {
private:
	string lid, id, name;
	float xf, ps_score, qm_score, score, gpa;
	int tern;
public:
	Score(string id, string lid, string name, float xf, float ps_score, float qm_score,float score,float gpa,int tern):id(id),lid(lid),name(name),xf(xf),ps_score(ps_score),qm_score(qm_score),score(score),gpa(gpa),tern(tern){}
    ~Score() {}
    string getlid(){
        return lid;
    }
    string getid(){
        return id;
    }
    string getname(){
        return name;
    }
    float getxf(){
        return xf;
    }
    float getps_score(){
        return ps_score;
    }
    float getqm_score(){
        return qm_score;
    }
    float getscore(){
        return score;
    }
    float getgpa(){
        return gpa;
    }
    int  gettern(){
        return tern;
    }


    void setlid(string lid){
        this->lid = lid;
    }
    void setid(string id){
        this->id = id;
    }
    void setname(string name){
        this->name = name;
    }
    void setxf(float xf){
        this->xf = xf;
    }
    void setps_score(float ps_score){
        this->ps_score = ps_score;
    }
    void setqm_score(float qm_score){
        this->qm_score = qm_score;
    }
    void setscore(float score){
        this->score = score;
    }
    void setgpa(float gpa){
        this->gpa = gpa;
    }
    void settern(int tern){
        this->tern = tern;
    }
};