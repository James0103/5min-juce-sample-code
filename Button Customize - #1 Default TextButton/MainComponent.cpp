#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
  setSize (600, 400);
  addAndMakeVisible(textBtn);
  textBtn.setButtonText("TextButton");
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (juce::Graphics& g)
{
}

void MainComponent::resized()
{
  textBtn.setBounds(10, 10, 200, 120);
//  textBtn.centreWithSize(200, 120);
//  textBtn.setCentrePosition(getWidth() * 0.5, getHeight() * 0.5);
}
