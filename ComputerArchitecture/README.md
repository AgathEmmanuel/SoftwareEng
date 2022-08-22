
# Computer Architecture  






## Computer architecture of complex modern microprocessors  


microcode  

architecture, micro-architecture and instruction set architectures  

basic concept of pipeline and two different types of hazards  

control hazards and the motivation for caches

cache characteristics and basic superscalar architecture

common issues for superscalar architecture  

different kinds of architectures for out-of-order processors  

common methods used to improve the performance of out-of-order processors including register renaming and memory disambiguation  

basic concept of very long instruction word (VLIW) processors  

common methods used to improve VLIW performance  

advanced mechanisms used to improve cache performance  

memory management and protection  

vector processor and optimizations for vector processors  

different types of multithreading  

parallelism, consistency models, and basic parallel programming techniques  

solutions for the consistency problem in parallel programming  

implementation of small multiprocessors  

design of interconnects for a multiprocessor  

design of interconnects for multiprocessor and network topology  

directory protocol used for coherence on large multiproccesors  













```





---- CPU RTL/Microarchitecture Engineer
Tenstorrent Inc.

The Tenstorrent team combines technologists from different disciplines who come together with a shared passion for AI and a deep desire to build great products. We value collaboration, curiosity, and a commitment to solving hard problems.

Find out more about our culture.

AI Silicon Design – RTL/Architecture Engineer:

RTL design and microarchitecture definition of high-performance microprocessors going into industry leading AI/ML architecture. This senior person coming into this role will define new features and code the RTL across multiple areas of our processor Core. The work is done alongside with a group of highly experienced engineers across various domains of the AI chip.

Responsibilities:
• Define architecture and logic design requirements by understanding rapidly evolving AI/ML models; work with engineers across domains to understand real world use cases
• RTL coding in Verilog leveraging on both industry tools as well as open-source infrastructure
• Drive trade-offs for your logic by working closely with performance, DV and physical design engineers to craft optimal solutions that meet the design goals
• Deploy innovative techniques for improving power, performance and area of the design, drive experiments with RTL and evaluate synthesis, timing and power results
• Debug RTL/logic issues across various hierarchies (ex: core, chip) in both pre-silicon and post-silicon environment

Experience and qualifications:
• BS/MS/PhD in EE/ECE/CE/CS with at least 8 years of experience
• Experience with computer architecture/system components/network/fabrics as a part of a CPU, ASIC or SOC design team
• Expertise in logic design and ability to evaluate functional, performance, timing and power for you design
• Strong experience with hardware description languages (Verilog, VHDL) and simulators (VCS, NC, Verilator)
• Expertise in microarchitecture definition and specification development
• Prior experience in industry standard ISAs – ARM, RISC-V, X86 preferred
• Strong problem solving and debug skills across various levels of design hierarchies









---- CPU Architect - AI Silicon 
Tenstorrent

AI is redefining the computing paradigm. The new paradigm computation demand is incommensurable with the existing software and hardware criteria. The best AI solutions require unifying the innovations in the software programming model, compiler technology, heterogenous computation platform, networking technology, and semiconductor process and packaging technology. Tenstorrent drives the innovations through holistic views of each technological component in software and hardware to unify them to create the best AI platform.


CPU Architect

As a performance architect in the dynamic and motivated Tenstorrent Platform Architecture team, you will work in a cross-functional team on ML software stacks, HPC and general purpose workloads, graph compiler, cache coherency protocols, super-scalar CPU, fabric/interconnection, networking, and DPU.

Responsibilities:

    Collaborate with the software team and platform architecture team to understand CPU hardware requirements for AI accelerator compiler, OS, video/image/voice processing, security, networking, and virtualization technology. Identify the application performance bottlenecks and functional requirements.
    Identify representative benchmarks for the software applications. Perform data-driven analysis based on simulation or analytical models to evaluate software, architecture, and u-architecture solutions to improve performance and power efficiency or reduce hardware.
    Set CPU architecture direction based on the data analysis and work with a cross-functional team to achieve the best hardware/software solutions to meet PPA goals.
    Develop a cycle-accurate CPU model that describes the microarchitecture, uses it for evaluation of new features.
    Collaborate with RTL and Physical design engineers to make power, performance, and area trade-offs.
    Drive analysis and correlation of performance feature both pre and post-silicon.

Experience and qualifications:

    BS/MS/PhD in EE/ECE/CE/CS
    Strong background in CPU ISA's, u-architecture research, and performance benchmarks.
    Understanding SOC fabric, coherency protocols, memory technology, and accelerator technology is a plus.
    Prior experience or strong understanding of ML/AI algorithms, compiler, and OS kernel is a plus.
    Proficient in C/C++ programming. Experience in the development of highly efficient C/C++ CPU models.








---- CPU Verification Lead
Arm
About the role
Come break new ground in design verification. This is a rare opportunity to join the Chandler-based CPU design verification team, which is part of Arm's global CPU group, as an experienced Design Verification Engineer/Manager. Our diverse engineering-centric group defines, designs, and validates Arm processor IP - the brains in billions of diverse electronic devices.
As a lead engineer here, you join a talented group of engineers responsible for verification of the next-generation Cortex-A or Cortex-M class CPU designs. In this role you will be able to push through the boundaries of your technical knowledge relating to groundbreaking Arm processors.
As an expert —think Staff/Principal type- on our diverse team of verification engineers, you take on the latest CPU microarchitecture design verification. You will be a part of a growing organization with a validated business model and a strong plan for continued future growth. Your team uses the latest tools and methodologies with an eye for innovation and creative problem solving.
WhatwillIbeaccountablefor?
Our team owns the design verification for one or more functional blocks, and we are responsible for the quality of delivery throughout all related engineering project phases. Including:

    Lead a high performing verification team to excellence
    Develop SystemVerilog UVM and/or formal verification for the block-level, functional verification of units
    Build and maintain detailed verification plans, generate and run test cases on logic simulation models
    Debug functional errors in the RTL model, using simulation tools, debug tools with an in-depth understanding of the architecture and RTL design
    Define and implement functional and statistical coverage, and improve the testbench to ensure coverage closure

Education & Qualifications:
You should have a Bachelor Degree or Master Degree in Computer Science, Electrical Engineering with a GPA of 3.0 or higher
Essential Skills & Experience

    A minimum of 10 years of experience in pre-silicon verification
    CPU microarchitecture experience including knowledge of pipeline, fetch, issue, Load/Store, L2 cache and MMU
    Previous experience in verifying such units using simulation and/or formal verification methods as well as experience with functional coverage driven verification methods
    Proven software engineering skills including understanding of object-oriented programming, data structures, and algorithms

Desired Skills & Experience

    You bring proven CPU microarchitecture experience and you have passion for continuing to grow your expertise in CPU microarchitecture including both familiarity with and a curiosity about Branch prediction, instruction fetch, in-order or out-of-order execution, and advanced memory system.
    You have a deep understanding of SystemVerilog and UVM, and you know how they are used to build flexible and reusable testbenches
    The love of sophisticated software engineering such as design patterns, profiling, unit testing, and programming in multiple languages
    You strive to achieve wining solutions while you build positive relationships which are built upon mutual trust, open communication and sharing of information and success.
    The drive for continuous improvement through spotting opportunities and seeking the views of others.
    You listen to different perspectives, evaluate, persuade and carefully craft your work to deliver impactful results








---- Processor Performance Tuning, Correlation, Verification Engineer
Apple
Key Qualifications

    The ideal candidate should have 2+ years of performance modeling, processor verification, or RTL design experience
    In-depth knowledge of digital logic design, CPU architecture and microarchitecture
    Experience in performance modeling for advanced CPU designs
    Experience in developing performance test plans and writing/debugging assembly tests for performance correlation and verification
    Good programming skills in assembly, C/C++, Verilog, System Verilog, and scripting
    Experience in silicon validation is a plus
    Should be a team player with excellent communication skills and able to work independently on the owned unit

Description

As a Chip Performance Engineer owning the verification of a certain area of performance features in a chip design, you will have responsibilities as follows: 

• Work closely with architects and RTL designers on verifying the performance features of the design and correlating with performance models 
• Work closely with software and application developers on identifying performance bottlenecks and tuning the software 
• Develop test plans and test infrastructure/tools for performance tuning, correlation, and verification • Improve and maintain the architectural performance models 
• Develop tests in assembly, C/C++, or vectors to debug and correlate the RTL and performance model 
• Develop C or Verilog-based checkers for verifying the performance features 
• Develop coverage monitors and analyze coverage to ensure all performance features are covered







---- Senior Engineer/Lead SoC microarchitecture and Logic Design

Intel

Job Description
In this position, the candidate will play a senior Technical Leadership role in the Server microarchitecture and Logic Design/Integration for SoC products designed by Xeon Engineering Group within the Design Engineering Group/Data Center and AI business Unit.

The candidate is expected to actively collaborate and drive the development of Micro-architecture specifications and the design implementation for Xeon Server SoCs

Candidate responsibilities include the following:

- Lead a team of engineers to successfully deliver design from architecture to tape out.
- All phases of front end design including micro-architectural design and specification.
-Perform logic design, Register Transfer Level (RTL) coding, and simulation to generate cell libraries, functional units, and subsystems for inclusion in full chip designs.
- Work with architects on feature scoping and approvals, feasibility studies, design tradeoff analysis, IP Vendor selection.
- Staging plan development Design and Testplan Reviews, Interface with - - Physical Design for timing/clocking issues, CCB, PNP, and post-Silicon debug lead.
- Close collaboration with debug (DFD) and manufacturing (DFT) teams in incorporating the uArch and design requirements
- Close collaboration with planning teams, architects, validation and physical design teams.
- Drive resolution of technical issues with IP and SOC development teams to meet schedule and quality.
- Drive and help build forward looking strategy for the team
- Mentor aspiring leads in the logic design team and build a strong technical bench strength

Qualifications

Required Educational Qualification
-Bachelor's degree in electrical engineering or associated discipline with 12+ years of experience or,
-Master's degree in electrical engineering or associated discipline with 10+ years of experience

Minimum Required Qualifications:

- 7 plus years of experience with IP / ASIC design / validation in Front End processes including RTL development, functional and performance verification.
- 5 plus years of experience in design, development, and integration of design blocks (IP) for system-on-chip (SoC) components.
- Experience in Verilog and System Verilog based logic design.
- Experience in Perl and/or C++ programming is an added advantage
- 5 plus years of experience in synthesis flow and timing closure.
- Experience in Xeon SoC/IP design and integration is an added advantage
- Knowledge of considerations for performance, power and cost optimization.

The candidate should exhibit:
- Excellent communication skills
- Flexibility to work in a dynamic environment and seamlessly multitask
- Acumen to identify develop strategic opportunities
- Proactive drive to achieve high-quality results through strong team-work
- Innovative thinker able to propose/drive solutions to tough product definition challenges to meet power/performance and functional requirements
- Proven ability to drive solutions to complex cross-functional technical problems working with senior technical peers/partner organizations
- Solid breadth of design expertise spanning all phases of the design cycle
Inside this Business Group

Xeon and Networking Engineering (XNE) focuses on the development and integration of XEON and Networking SOC's and critical IP's sustain Intels Xeon and 5G networking roadmap.





---- RTL Micro-architecture Design Engineer
Save
Samsung Semiconductor 

 Design and Engage with other architects within the IP level to drive the Micro-Architectural definition

· Deliver quality micro-architectural level documentation

· Produce quality RTL on schedule meeting PPA goals.

· Basic knowledge in USB, PCI, PHY, Memory controller, Display controller.

Work within the GPU/CPU team to drive power reduction including estimation, analysis, and optimization, flow setup, and methodology improvements.

· Collaborate with system architects and designers, define use cases, identify and prototype power and perf-per-watt optimizations.

· Run performance models and power tools, write scripts, analyze data, and evaluate tradeoffs against project goals.











---- RTL Design Engineer, CPU
SiFive Inc

About SiFiveAs the pioneers who introduced RISC-V to the world, SiFive is transforming the future of compute by bringing the limitless potential of RISC-V to the highest performance and most data-intensive applications in the world. SiFive’s unrivaled compute platforms have enabled leading technology companies around the world to innovate, optimize, and deliver the most advanced solutions of tomorrow across every market segment of chip design, including artificial intelligence, machine learning, automotive, datacenter, mobile, and consumer. With SiFive, the future of RISC-V has no limits.

RTL DESIGN, MICROARCHITECTURELocation : Bangalore / Hyderabad

SiFive is looking for hardware engineers who are passionate about designing industry-leading CPUs based on revolutionary open-source RISC-V Architecture. We are looking for people who are as excited as we are about working in a fast-paced dynamic environment to bring new CPU IP to market quickly, with high quality and exceptional performance.

We have multiple positions open at various levels. Join us and surf the RISC-V wave with SiFive!

Responsibilities:• Architect, design and implement new features, performance improvements, and ISA extensions in RISC-V CPU core generators.
• Microarchitecture development and specification. Ensure that knowledge is shared via great documentation and participation in a culture of collaborative design.
• Perform initial sandbox verification, and work with design verification team to create and execute thorough verification test plans.
• Work with physical implementation team to implement and optimize physical design to meet frequency, area, power goals.
• Collaborate with performance modelling team for performance exploration and optimization to meet performance goals.

Requirements:• 2 to 8 yrs of experience in RTL design and microarchitecture development of high-performance, energy-efficient CPUs.
• Knowledge of CPU processor designs with hands on experience in one or more of the following areas: instruction fetch and decode; branch prediction; register renaming and instruction scheduling; integer; floating-point, and vector units; load-store unit; cache and memory subsystems.
• Knowledge of RISC-V architecture is a plus.
• Proficiency with hardware (RTL) design in Verilog, System Verilog, or VHDL.
• Experience with Scala and/or Chisel is a plus.
• Attention to detail and ability to learn and ramp up on new design concepts.
• Ability to work well with others and a belief that engineering is a team sport.
• Knowledge of at least one object-oriented and/or functional programming language.
• BS/MS degree in EE, CE, CS or a related technical discipline, or equivalent experience.







---- RTL Engineer - Autopilot AI (Dojo)
Tesla

The Role

The Autopilot Dojo Hardware team is looking for a RTL Design Engineer to work in Palo Alto, CA. Candidate is expected to document microarchitecture specifications, define system-level functional requirements, and write RTL to meet autopilot system objectives.

Responsibilities

    CPU micro-architecture specification and design
    Power-efficient microprocessor design
    Specification, microarchitecture, and RTL design of microprocessor, memory and network subsystems
    Balance performance, power, safety, and cost requirements
    Trade-off functional, physical and performance requirements
    Work with cross-functional teams, including implementation, verification, and performance engineers
    Design for synthesis


Requirements

    High performance (low latency, high bandwidth) design techniques
    Area and power-efficient CPU RTL design
    Low power microarchitecture techniques
    Verilog RTL logic design
    Experience with simulators and waveform debug tools.
    Knowledge of logic design principles, including timing and power implications.
    Three or more years of industry experience
    Experience with IEEE floating point is a plus
    Experience with high speed SERDES or SOC design is a plus






```





# Links  

[https://www.javatpoint.com/computer-organization-and-architecture-tutorial](https://www.javatpoint.com/computer-organization-and-architecture-tutorial)  
[https://www.javatpoint.com/compiler-tutorial](https://www.javatpoint.com/compiler-tutorial)  


> Courses  
[https://www.coursera.org/specializations/fpga-design](https://www.coursera.org/specializations/fpga-design)  
[https://www.coursera.org/learn/comparch](https://www.coursera.org/learn/comparch)  
[https://www.coursera.org/learn/build-a-computer](https://www.coursera.org/learn/build-a-computer)  



