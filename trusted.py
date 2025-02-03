from flask import Flask, request, redirect

app = Flask(__name__)

@app.route("/redirect")
def open_redirect():
    target = request.args.get("url")  # Lấy URL mục tiêu từ tham số `to`
    print(target)
    if not target:
        return "khong co ?to=URL", 400
    
    return redirect(target, code=302)  # Chuyển hướng đến URL bất kỳ

if __name__ == "__main__":
    app.run(host="0.0.0.0", port=5000, debug=True)
