﻿#include "SphereSystemSimulator.h"

std::function<float(float)> SphereSystemSimulator::m_Kernels[5] = {
	[](float x) {return 1.0f; },              // Constant, m_iKernel = 0
	[](float x) {return 1.0f - x; },          // Linear, m_iKernel = 1, as given in the exercise Sheet, x = d/2r
	[](float x) {return (1.0f - x)*(1.0f - x); }, // Quadratic, m_iKernel = 2
	[](float x) {return 1.0f / (x)-1.0f; },     // Weak Electric Charge, m_iKernel = 3
	[](float x) {return 1.0f / (x*x) - 1.0f; },   // Electric Charge, m_iKernel = 4
};

// SphereSystemSimulator member functions
SphereSystemSimulator::SphereSystemSimulator(): m_fMass(1), m_fRadius(.5), m_fForceScaling(1), m_fDamping(0),
                                                m_iNumSpheres(0), m_iKernel(0), m_currentTestCase(0),
                                                m_iAccelerator(NAIVEACC)
{
}

const char* SphereSystemSimulator::getTestCasesStr()
{
	return "Demo 1, Demo 2, Demo 3, Demo 4";
}

void SphereSystemSimulator::initUI(DrawingUtilitiesClass* DUC)
{

}

void SphereSystemSimulator::reset()
{
}

void SphereSystemSimulator::drawFrame(ID3D11DeviceContext* pd3dImmediateContext)
{
}

void SphereSystemSimulator::notifyCaseChanged(int testCase)
{
	m_currentTestCase = testCase;
}

void SphereSystemSimulator::externalForcesCalculations(float timeElapsed)
{
}

void SphereSystemSimulator::simulateTimestep(float timeStep)
{
}

void SphereSystemSimulator::onClick(int x, int y)
{
}

void SphereSystemSimulator::onMouse(int x, int y)
{
}