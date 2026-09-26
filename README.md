# STM32 Learning Projects

面向 STM32 的学习、实战与电子设计竞赛准备仓库。这里不仅保存可运行的工程，也记录从基础外设到完整系统设计的学习过程。

## 学习目标

- 扎实掌握 STM32F1 常用外设与标准外设库的使用。
- 将单个外设练习逐步组合为可演示、可复现的小型嵌入式项目。
- 为电子设计竞赛、课程设计和后续科研项目沉淀代码、硬件资料与调试记录。

## 仓库导航

| 目录 | 用途 | 当前内容 |
| --- | --- | --- |
| [`00_Learning-Notes`](00_Learning-Notes/README.md) | 原理笔记、踩坑记录与知识图谱 | 学习路线与笔记规范 |
| [`01_Basic-Peripherals`](01_Basic-Peripherals/README.md) | GPIO、定时器、串口等基础外设练习 | 等待持续补充 |
| [`02_Practical-Projects`](02_Practical-Projects/README.md) | 可独立演示的综合小项目 | 红绿灯控制器 |
| [`03_Electronic-Design-Contest`](03_Electronic-Design-Contest/README.md) | 电赛训练、赛题分析、方案与报告 | 目录说明 |
| [`04_Hardware-Design`](04_Hardware-Design/README.md) | 最小系统、原理图、PCB 与硬件资料 | 目录说明 |
| [`05_Advanced`](05_Advanced/README.md) | PID、通信、FreeRTOS 等进阶主题 | 目录说明 |
| [`docs/PROJECT_TEMPLATE.md`](docs/PROJECT_TEMPLATE.md) | 新项目 README 写作模板 | 可直接复制使用 |

## 当前项目

| 项目 | MCU / 平台 | 主要内容 |
| --- | --- | --- |
| [`01_Traffic-Light`](02_Practical-Projects/01_Traffic-Light/README.md) | STM32F103C8T6、标准外设库、Keil MDK | GPIO 输出、按键输入、软件延时与状态切换 |

## 推荐学习顺序

```text
GPIO / LED → 按键 → EXTI → 定时器 → PWM → ADC
                                      ↓
                         USART → I2C / SPI → 综合项目
                                      ↓
                         控制算法 / RTOS / 电赛训练
```

## 使用约定

- 每个独立项目均包含 `README.md`，说明目标、硬件连接、构建方式、结果和待改进项。
- 仅提交源代码、工程配置、原理图、PCB 源文件与必要文档；编译生成文件由 `.gitignore` 排除。
- 图片、示波器截图等演示素材放在项目内的 `Images/` 目录；原理图和 PCB 放在 `Hardware/` 目录。
- 新项目请从 [`PROJECT_TEMPLATE.md`](docs/PROJECT_TEMPLATE.md) 开始，保持说明格式一致。

## 开发环境

现有工程使用 STM32F10x 标准外设库与 Keil MDK。不同项目的具体芯片、工具链和依赖会写在各自的 README 中。

## 许可证

本仓库暂未设置许可证。在复用代码或资料前，请先联系仓库作者确认用途。
