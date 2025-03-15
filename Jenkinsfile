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
        stage('Deploy') {
            steps {
                sshagent(credentials: ['docker-ssh-key']) {
                    sh 'scp ./pizza abc@localhost:/home/abc/deploy -P 2222'
                }
            }
        }
    }
}