# Security Policy

## Supported Versions

This project is part of an academic laboratory curriculum. Because it relies on the **winbgim** library and older graphics standards, security updates are **not actively released**.

| Version | Supported |
|--------|-----------|
| 1.0.x  | ✅        |
| <1.0   | ❌        |

---

## Reporting a Vulnerability

While this is an **educational project** intended for local execution, security matters. If you discover any security-related issues:

1. **Do not disclose publicly** – avoid opening a public issue for security vulnerabilities.  
2. **Contact** – reach out via your GitHub profile contact information, or open a **private draft security advisory** if available.  
3. **Response** – I will acknowledge your report and look into the issue as soon as possible.

---

## Educational Disclaimer

These programs are designed for **learning computer graphics fundamentals** and are intended for **local development only** (VS Code + MinGW).

- **Graphics Library:** `graphics.h` and `winbgim.h` are legacy tools, not intended for production or network-facing applications.  
- **User Input:** Uses standard input functions (like `scanf`) without modern buffer overflow protections.  

**Use these implementations for study and academic purposes only.**
