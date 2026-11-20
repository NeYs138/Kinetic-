<!DOCTYPE html>
<html lang="ru">
<head>
<meta charset="UTF-8">
<title>Kinetic — Designer Portfolio</title>
<style>
* { margin: 0; padding: 0; box-sizing: border-box; }
body {
  font-family: 'Helvetica Neue', Arial, sans-serif;
  background: #f2f0eb;
  color: #111;
  overflow-x: hidden;
}

/* Кастомный курсор */
.cursor {
  width: 20px; height: 20px;
  border: 2px solid #111;
  border-radius: 50%;
  position: fixed;
  pointer-events: none;
  z-index: 9999;
  transition: transform 0.15s ease, background 0.3s, border-color 0.3s;
  transform: translate(-50%, -50%);
  mix-blend-mode: difference;
}
.cursor.grow { transform: translate(-50%,-50%) scale(3); background: #111; border-color: transparent; }

/* Хедер */
header {
  position: fixed;
  top: 0; left: 0; right: 0;
  display: flex;
  justify-content: space-between;
  align-items: center;
  padding: 24px 40px;
  z-index: 100;
  mix-blend-mode: difference;
  color: #fff;
}
.logo { font-weight: 800; font-size: 20px; letter-spacing: -0.5px; }
.menu-btn {
  font-size: 14px;
  font-weight: 600;
  text-transform: uppercase;
  letter-spacing: 2px;
  cursor: pointer;
  display: flex;
  align-items: center;
  gap: 10px;
}
.menu-btn .lines { display: flex; flex-direction: column; gap: 4px; }
.menu-btn .lines span {
  width: 24px; height: 2px; background: currentColor;
  transition: transform 0.3s;
}
.menu-btn:hover .lines span:first-child { transform: translateX(5px); }

/* Hero с огромным текстом */
.hero {
  min-height: 100vh;
  display: flex;
  flex-direction: column;
  justify-content: center;
  padding: 0 40px;
  position: relative;
  overflow: hidden;
}
.hero .big {
  font-size: clamp(70px, 18vw, 260px);
  font-weight: 900;
  line-height: 0.82;
  letter-spacing: -8px;
  text-transform: uppercase;
}
.hero .big .word {
  display: block;
  overflow: hidden;
}
.hero .big .word span {
  display: inline-block;
  animation: slideUp 1.4s cubic-bezier(0.16,1,0.3,1) backwards;
}
.hero .big .word:nth-child(1) span { animation-delay: 0.1s; }
.hero .big .word:nth-child(2) span { animation-delay: 0.25s; font-style: italic; color: #ff4d00; }
.hero .big .word:nth-child(3) span { animation-delay: 0.4s; }

@keyframes slideUp {
  from { transform: translateY(110%) rotate(5deg); }
  to { transform: translateY(0) rotate(0); }
}

.hero-info {
  display: flex;
  justify-content: space-between;
  align-items: flex-end;
  margin-top: 60px;
  animation: fadeIn 1s 1s backwards;
  gap: 40px;
  flex-wrap: wrap;
}
.hero-info p {
  max-width: 380px;
  font-size: 17px;
  line-height: 1.6;
  color: #555;
}
.hero-info .meta {
  text-align: right;
  font-size: 14px;
  color: #888;
  text-transform: uppercase;
  letter-spacing: 1px;
}
@keyframes fadeIn { from { opacity: 0; } to { opacity: 1; } }

/* Бегущая строка */
.marquee {
  background: #111;
  color: #f2f0eb;
  padding: 24px 0;
  overflow: hidden;
  white-space: nowrap;
  border-top: 2px solid #111;
  border-bottom: 2px solid #111;
}
.marquee-track {
  display: inline-flex;
  gap: 60px;
  animation: scroll 25s linear infinite;
  font-size: 42px;
  font-weight: 800;
  letter-spacing: -1px;
  text-transform: uppercase;
}
.marquee-track span { display: flex; align-items: center; gap: 60px; }
.marquee .star { color: #ff4d00; }
@keyframes scroll {
  from { transform: translateX(0); }
  to { transform: translateX(-50%); }
}

/* Секция работ */
.work { padding: 120px 40px; }
.work-header {
  display: flex;
  justify-content: space-between;
  align-items: baseline;
  margin-bottom: 60px;
  border-bottom: 2px solid #111;
  padding-bottom: 20px;
}
.work-header h2 {
  font-size: clamp(32px, 5vw, 64px);
  font-weight: 900;
  letter-spacing: -2px;
}
.work-header span { font-size: 14px; color: #888; text-transform: uppercase; letter-spacing: 2px; }

.project {
  display: grid;
  grid-template-columns: 80px 1fr 1fr 60px;
  gap: 30px;
  align-items: center;
  padding: 40px 0;
  border-bottom: 1px solid #ccc;
  position: relative;
  cursor: pointer;
  transition: padding 0.5s cubic-bezier(0.16,1,0.3,1);
}
.project::before {
  content: '';
  position: absolute;
  inset: 0;
  background: #111;
  transform: scaleY(0);
  transform-origin: bottom;
  transition: transform 0.5s cubic-bezier(0.16,1,0.3,1);
  z-index: -1;
}
.project:hover::before { transform: scaleY(1); }
.project:hover { color: #f2f0eb; padding-left: 30px; padding-right: 30px; }
.project:hover .num, .project:hover .cat { color: #f2f0eb; }
.project:hover .arrow-proj { transform: rotate(45deg); color: #ff4d00; }

.project .num { font-size: 16px; font-weight: 700; font-family: monospace; color: #999; transition: color 0.4s; }
.project .name { font-size: clamp(24px, 3vw, 40px); font-weight: 800; letter-spacing: -1px; }
.project .cat { font-size: 15px; color: #888; transition: color 0.4s; }
.project .arrow-proj { font-size: 28px; transition: transform 0.5s cubic-bezier(0.16,1,0.3,1), color 0.4s; }

/* Футер */
footer {
  padding: 100px 40px 60px;
  background: #111;
  color: #f2f0eb;
}
footer .cta {
  font-size: clamp(40px, 8vw, 120px);
  font-weight: 900;
  line-height: 0.9;
  letter-spacing: -4px;
  margin-bottom: 60px;
}
footer .cta a { color: #ff4d00; text-decoration: none; position: relative; }
footer .cta a::after {
  content: '';
  position: absolute;
  bottom: 10px; left: 0;
  width: 100%; height: 6px;
  background: #ff4d00;
  transform: scaleX(0);
  transform-origin: right;
  transition: transform 0.5s cubic-bezier(0.16,1,0.3,1);
}
footer .cta a:hover::after { transform: scaleX(1); transform-origin: left; }
footer .foot-bottom {
  display: flex;
  justify-content: space-between;
  flex-wrap: wrap;
  gap: 20px;
  padding-top: 40px;
  border-top: 1px solid #333;
  font-size: 14px;
  color: #888;
}

/* Scroll reveal */
.reveal {
  opacity: 0;
  transform: translateY(60px);
  transition: all 1s cubic-bezier(0.16,1,0.3,1);
}
.reveal.visible { opacity: 1; transform: translateY(0); }
</style>
</head>
<body>

<div class="cursor" id="cursor"></div>

<header>
  <div class="logo">KINETIC®</div>
  <div class="menu-btn">Меню <div class="lines"><span></span><span></span></div></div>
</header>

<section class="hero">
  <div class="big">
    <div class="word"><span>Design</span></div>
    <div class="word"><span>In</span></div>
    <div class="word"><span>Motion</span></div>
  </div>
  <div class="hero-info">
    <p>Независимый дизайнер и арт-директор. Превращаю идеи в живые интерфейсы и визуальные истории.</p>
    <div class="meta">
      Based in Berlin<br>
      Since 2018<br>
      Available worldwide
    </div>
  </div>
</section>

<div class="marquee">
  <div class="marquee-track">
    <span>Brand Identity <span class="star">★</span> Web Design <span class="star">★</span> Motion <span class="star">★</span> Art Direction <span class="star">★</span></span>
    <span>Brand Identity <span class="star">★</span> Web Design <span class="star">★</span> Motion <span class="star">★</span> Art Direction <span class="star">★</span></span>
  </div>
</div>

<section class="work">
  <div class="work-header">
    <h2>Selected Work</h2>
    <span>2023 — 2025</span>
  </div>

  <div class="project reveal">
    <div class="num">01</div>
    <div class="name">Fluxwave</div>
    <div class="cat">Branding / Website</div>
    <div class="arrow-proj">↗</div>
  </div>
  <div class="project reveal">
    <div class="num">02</div>
    <div class="name">Monolith</div>
    <div class="cat">Editorial / Art Direction</div>
    <div class="arrow-proj">↗</div>
  </div>
  <div class="project reveal">
    <div class="num">03</div>
    <div class="name">Aether</div>
    <div class="cat">Product / Motion</div>
    <div class="arrow-proj">↗</div>
  </div>
  <div class="project reveal">
    <div class="num">04</div>
    <div class="name">Verve</div>
    <div class="cat">Identity / Web</div>
    <div class="arrow-proj">↗</div>
  </div>
</section>

<footer>
  <div class="cta reveal">Let's make<br>something <a href="#">great</a>.</div>
  <div class="foot-bottom">
    <div>hello@kinetic.studio</div>
    <div>Instagram / Behance / LinkedIn</div>
    <div>© 2025 Kinetic Studio</div>
  </div>
</footer>

<script>
// Кастомный курсор
const cursor = document.getElementById('cursor');
let mouseX = 0, mouseY = 0;
let curX = 0, curY = 0;

document.addEventListener('mousemove', e => {
  mouseX = e.clientX;
  mouseY = e.clientY;
});

function animateCursor() {
  curX += (mouseX - curX) * 0.15;
  curY += (mouseY - curY) * 0.15;
  cursor.style.left = curX + 'px';
  cursor.style.top = curY + 'px';
  requestAnimationFrame(animateCursor);
}
animateCursor();

document.querySelectorAll('a, .project, .menu-btn').forEach(el => {
  el.addEventListener('mouseenter', () => cursor.classList.add('grow'));
  el.addEventListener('mouseleave', () => cursor.classList.remove('grow'));
});

// Scroll reveal
const observer = new IntersectionObserver(entries => {
  entries.forEach(e => {
    if (e.isIntersecting) e.target.classList.add('visible');
  });
}, { threshold: 0.15 });
document.querySelectorAll('.reveal').forEach(el => observer.observe(el));

// Параллакс на hero
window.addEventListener('scroll', () => {
  const scrolled = window.scrollY;
  const big = document.querySelector('.hero .big');
  if (big) big.style.transform = `translateY(${scrolled * 0.3}px)`;
});
</script>
</body>
</html>
