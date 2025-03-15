pipeline {
    agent any
    stages {
        stage('Install dependencies') {
            steps {
                sh 'apt-get update && apt-get install -y g++'
            }
        }
        stage('Build') {
            steps {
                sh 'g++ -o pizza pizza.cpp'
            }
        }
        stage('Run') {
            steps {
                sh './pizza'
            }
        }
    }
}