pipeline {
    agent any
    stages {
        stage('Install dependencies') {
            steps {
                sh '/opt/homebrew/bin/brew install gcc'
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