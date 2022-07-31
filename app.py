from flask import Flask, render_template
from markupsafe import escape
from jinja2 import escape

app = Flask(__name__)

@app.route('/')
def home():

    return render_template('index.html')

app.run(debug=False, host='0.0.0.0')
