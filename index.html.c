<!DOCTYPE html>
<html lang="ru">
<head>
<meta charset="UTF-8">
<title>Aurora — Creative Developer</title>
<style>
* { margin: 0; padding: 0; box-sizing: border-box; }
body {
  font-family: 'Inter', -apple-system, sans-serif;
  background: #0a0a0f;
  color: #fff;
  overflow-x: hidden;
  min-height: 100vh;
}

/* Плавающие градиентные пятна */
.blob {
  position: fixed;
  border-radius: 50%;
  filter: blur(80px);
  opacity: 0.5;
  z-index: 0;
  animation: float 20s ease-in-out infinite;
}
.blob1 { width: 500px; height: 500px; background: #6a5acd; top: -100px; left: -100px; }
.blob2 { width: 400px; height: 400px; background: #ff6b9d; bottom: -100px; right: -100px; animation-delay: -7s; }
.blob3 { width: 350px; height: 350px; background: #00d9ff; top: 40%; left: 50%; animation-delay: -14s; }

@keyframes float {
  0%, 100% { transform: translate(0,0) scale(1); }
  33% { transform: translate(60px,-80px) scale(1.1); }
  66% { transform: translate(-40px,60px) scale(0.9); }
}

/* Сетка-оверлей */
body::before {
  content: '';
  position: fixed;
  inset: 0;
  background-image:
    linear-gradient(rgba(255,255,255,0.03) 1px, transparent 1px),
    linear-gradient(90deg, rgba(255,255,255,0.03) 1px, transparent 1px);
  background-size: 60px 60px;
  z-index: 1;
  pointer-events: none;
}

.container {
  position: relative;
  z-index: 2;
  max-width: 1200px;
  margin: 0 auto;
  padding: 0 30px;
}

nav {
  display: flex;
  justify-content: space-between;
  align-items: center;
  padding: 30px 0;
  animation: slideDown 1s cubic-bezier(0.16,1,0.3,1);
}
.logo {
  font-size: 24px;
  font-weight: 800;
  letter-spacing: -1px;
  background: linear-gradient(135deg, #fff, #a78bfa);
  -webkit-background-clip: text;
  -webkit-text-fill-color: transparent;
}
nav ul { display: flex; gap: 40px; list-style: none; }
nav a {
  color: rgba(255,255,255,0.6);
  text-decoration: none;
  font-size: 15px;
  position: relative;
  transition: color 0.3s;
}
nav a::after {
  content: '';
  position: absolute;
  bottom: -6px; left: 0;
  width: 0; height: 2px;
  background: linear-gradient(90deg, #6a5acd, #ff6b9d);
  transition: width 0.4s cubic-bezier(0.16,1,0.3,1);
}
nav a:hover { color: #fff; }
nav a:hover::after { width: 100%; }

@keyframes slideDown {
  from { opacity: 0; transform: translateY(-30px); }
  to { opacity: 1; transform: translateY(0); }
}

/* Hero */
.hero {
  min-height: calc(100vh - 100px);
  display: flex;
  flex-direction: column;
  justify-content: center;
  padding-bottom: 100px;
}
.hero-tag {
  display: inline-flex;
  align-items: center;
  gap: 10px;
  padding: 8px 18px;
  border-radius: 100px;
  background: rgba(255,255,255,0.05);
  border: 1px solid rgba(255,255,255,0.1);
  font-size: 13px;
  width: fit-content;
  margin-bottom: 30px;
  animation: fadeUp 1s 0.2s cubic-bezier(0.16,1,0.3,1) backwards;
}
.hero-tag .dot {
  width: 8px; height: 8px;
  border-radius: 50%;
  background: #4ade80;
  box-shadow: 0 0 10px #4ade80;
  animation: pulse 2s infinite;
}
@keyframes pulse {
  0%,100% { opacity: 1; }
  50% { opacity: 0.4; }
}

.hero h1 {
  font-size: clamp(48px, 9vw, 120px);
  font-weight: 900;
  line-height: 0.95;
  letter-spacing: -4px;
  margin-bottom: 30px;
}
.hero h1 .line {
  display: block;
  overflow: hidden;
}
.hero h1 .line span {
  display: inline-block;
  animation: revealUp 1.2s cubic-bezier(0.16,1,0.3,1) backwards;
}
.hero h1 .line:nth-child(1) span { animation-delay: 0.3s; }
.hero h1 .line:nth-child(2) span { animation-delay: 0.45s; }

.gradient-text {
  background: linear-gradient(120deg, #a78bfa, #ff6b9d, #00d9ff);
  background-size: 200% 200%;
  -webkit-background-clip: text;
  -webkit-text-fill-color: transparent;
  animation: gradientShift 6s ease infinite;
}
@keyframes gradientShift {
  0%,100% { background-position: 0% 50%; }
  50% { background-position: 100% 50%; }
}

@keyframes revealUp {
  from { transform: translateY(100%); }
  to { transform: translateY(0); }
}
@keyframes fadeUp {
  from { opacity: 0; transform: translateY(30px); }
  to { opacity: 1; transform: translateY(0); }
}

.hero p {
  max-width: 500px;
  font-size: 18px;
  color: rgba(255,255,255,0.6);
  line-height: 1.6;
  margin-bottom: 40px;
  animation: fadeUp 1s 0.7s cubic-bezier(0.16,1,0.3,1) backwards;
}

.btns { display: flex; gap: 16px; animation: fadeUp 1s 0.9s cubic-bezier(0.16,1,0.3,1) backwards; }
.btn {
  padding: 16px 32px;
  border-radius: 100px;
  font-size: 15px;
  font-weight: 600;
  cursor: pointer;
  border: none;
  text-decoration: none;
  display: inline-flex;
  align-items: center;
  gap: 10px;
  transition: all 0.3s cubic-bezier(0.16,1,0.3,1);
  position: relative;
  overflow: hidden;
}
.btn-primary {
  background: #fff;
  color: #0a0a0f;
}
.btn-primary:hover { transform: translateY(-3px); box-shadow: 0 15px 40px rgba(255,255,255,0.3); }
.btn-ghost {
  background: transparent;
  color: #fff;
  border: 1px solid rgba(255,255,255,0.2);
}
.btn-ghost:hover { background: rgba(255,255,255,0.05); border-color: rgba(255,255,255,0.4); }
.btn .arrow { transition: transform 0.3s; }
.btn:hover .arrow { transform: translateX(5px); }

/* Карточки проектов */
.projects {
  padding: 100px 0 150px;
}
.section-title {
  font-size: 14px;
  text-transform: uppercase;
  letter-spacing: 3px;
  color: rgba(255,255,255,0.4);
  margin-bottom: 60px;
  display: flex;
  align-items: center;
  gap: 20px;
}
.section-title::after {
  content: '';
  flex: 1;
  height: 1px;
  background: linear-gradient(90deg, rgba(255,255,255,0.15), transparent);
}

.grid {
  display: grid;
  grid-template-columns: repeat(auto-fit, minmax(300px, 1fr));
  gap: 24px;
}
.card {
  position: relative;
  border-radius: 20px;
  padding: 40px;
  background: rgba(255,255,255,0.03);
  border: 1px solid rgba(255,255,255,0.08);
  overflow: hidden;
  cursor: pointer;
  transition: all 0.5s cubic-bezier(0.16,1,0.3,1);
  min-height: 260px;
  display: flex;
  flex-direction: column;
  justify-content: space-between;
}
.card::before {
  content: '';
  position: absolute;
  inset: 0;
  background: radial-gradient(600px circle at var(--mx, 50%) var(--my, 50%), rgba(167,139,250,0.15), transparent 40%);
  opacity: 0;
  transition: opacity 0.5s;
}
.card:hover::before { opacity: 1; }
.card:hover { transform: translateY(-8px); border-color: rgba(167,139,250,0.3); }

.card-num {
  font-size: 14px;
  color: rgba(255,255,255,0.3);
  font-family: monospace;
}
.card h3 {
  font-size: 28px;
  font-weight: 700;
  letter-spacing: -1px;
  margin-bottom: 10px;
}
.card p { color: rgba(255,255,255,0.5); font-size: 15px; line-height: 1.5; }
.card-arrow {
  position: absolute;
  top: 40px; right: 40px;
  width: 44px; height: 44px;
  border-radius: 50%;
  border: 1px solid rgba(255,255,255,0.15);
  display: flex;
  align-items: center;
  justify-content: center;
  transition: all 0.4s cubic-bezier(0.16,1,0.3,1);
}
.card:hover .card-arrow {
  background: #fff;
  color: #0a0a0f;
  transform: rotate(-45deg);
}

/* Scroll reveal */
.reveal {
  opacity: 0;
  transform: translateY(50px);
  transition: all 1s cubic-bezier(0.16,1,0.3,1);
}
.reveal.visible {
  opacity: 1;
  transform: translateY(0);
}

footer {
  text-align: center;
  padding: 60px 0;
  color: rgba(255,255,255,0.3);
  font-size: 14px;
  border-top: 1px solid rgba(255,255,255,0.06);
}
</style>
</head>
<body>

<div class="blob blob1"></div>
<div class="blob blob2"></div>
<div class="blob blob3"></div>

<div class="container">
  <nav>
    <div class="logo">AURORA°</div>
    <ul>
      <li><a href="#work">Work</a></li>
      <li><a href="#">About</a></li>
      <li><a href="#">Contact</a></li>
    </ul>
  </nav>

  <section class="hero">
    <div class="hero-tag"><span class="dot"></span> Доступен для проектов</div>
    <h1>
      <span class="line"><span>Creative</span></span>
      <span class="line"><span class="gradient-text">Developer</span></span>
    </h1>
    <p>Создаю цифровые продукты с фокусом на движение, эстетику и внимание к деталям.</p>
    <div class="btns">
      <a href="#work" class="btn btn-primary">Смотреть работы <span class="arrow">→</span></a>
      <a href="#" class="btn btn-ghost">Связаться</a>
    </div>
  </section>

  <section class="projects" id="work">
    <div class="section-title reveal">Избранные проекты</div>
    <div class="grid">
      <div class="card reveal">
        <div class="card-arrow">↗</div>
        <div class="card-num">01</div>
        <div>
          <h3>Nebula App</h3>
          <p>Мобильное приложение для медитации с адаптивными звуковыми ландшафтами.</p>
        </div>
      </div>
      <div class="card reveal">
        <div class="card-arrow">↗</div>
        <div class="card-num">02</div>
        <div>
          <h3>Prism Studio</h3>
          <p>Платформа для визуального сторителлинга с интерактивными сценами.</p>
        </div>
      </div>
      <div class="card reveal">
        <div class="card-arrow">↗</div>
        <div class="card-num">03</div>
        <div>
          <h3>Orbit Finance</h3>
          <p>Финтех-дашборд с живыми графиками и микроинтеракциями.</p>
        </div>
      </div>
    </div>
  </section>

  <footer>© 2025 Aurora — Made with motion & care</footer>
</div>

<script>
// Эффект следования курсора за карточкой
document.querySelectorAll('.card').forEach(card => {
  card.addEventListener('mousemove', e => {
    const rect = card.getBoundingClientRect();
    card.style.setProperty('--mx', (e.clientX - rect.left) + 'px');
    card.style.setProperty('--my', (e.clientY - rect.top) + 'px');
  });
});

// Scroll reveal
const observer = new IntersectionObserver(entries => {
  entries.forEach(e => {
    if (e.isIntersecting) e.target.classList.add('visible');
  });
}, { threshold: 0.1 });
document.querySelectorAll('.reveal').forEach(el => observer.observe(el));

// Параллакс для градиентных пятен
window.addEventListener('mousemove', e => {
  const x = (e.clientX / window.innerWidth - 0.5) * 30;
  const y = (e.clientY / window.innerHeight - 0.5) * 30;
  document.querySelector('.blob1').style.transform = `translate(${x}px, ${y}px)`;
  document.querySelector('.blob2').style.transform = `translate(${-x}px, ${-y}px)`;
});
</script>
</body>
</html>