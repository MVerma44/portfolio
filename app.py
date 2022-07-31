from flask import Flask, render_template
import json

app = Flask(__name__)

@app.route('/')
def home():

    return render_template('index.html')

app.run(debug=False, host='0.0.0.0')
