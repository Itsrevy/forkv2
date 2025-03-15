pipeline {
    agent any
    stages {
        stage('Install dependencies') {
            steps {
                sh 'sudo apt-get update && sudo apt-get install -y g++'
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