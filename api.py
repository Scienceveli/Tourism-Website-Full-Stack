from flask import Flask, jsonify

app = Flask(__name__)

destinations = [
    {"id": 1, "name": "Paris", "price": 1200.50},
    {"id": 2, "name": "Cairo", "price": 800.00},
    {"id": 3, "name": "Tokyo", "price": 1500.00},
]

@app.route('/api/destinations', methods=['GET'])
def get_destinations():
    return jsonify(destinations)

if __name__ == '__main__':
    app.run(debug=True)
