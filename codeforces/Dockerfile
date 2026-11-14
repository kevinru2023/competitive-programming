FROM gcc:latest

WORKDIR /app

# Install any additional tools you might need
RUN apt-get update && apt-get install -y \
    vim \
    gdb \
    && rm -rf /var/lib/apt/lists/*

# Set up competitive programming environment
RUN echo 'alias compete="g++ -std=c++17 -O2 -Wall -o solution"' >> ~/.bashrc

CMD ["bash"]
