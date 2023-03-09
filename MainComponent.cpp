#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    setSize (600, 400);
    addAndMakeVisible(dial1);
    addAndMakeVisible(dial2);
    
    //dial1.setSliderStyle(juce::Slider::SliderStyle::Rotary);
    //dial2.setSliderStyle(juce::Slider::SliderStyle::Rotary);
    //dial1.setTextBoxStyle(juce::Slider::TextBoxBelow, true, 100, 25);
    //dial2.setTextBoxStyle(juce::Slider::TextBoxBelow, true, 100, 25);
    
    dial1.setSliderStyle(juce::Slider::SliderStyle::Rotary);
    dial2.setSliderStyle(juce::Slider::SliderStyle::Rotary);
    dial1.setTextBoxStyle(juce::Slider::TextBoxBelow, true, 100, 25);
    dial2.setTextBoxStyle(juce::Slider::TextBoxBelow, true, 100, 25);

    // set the text color to red (from c
    juce::Colour textColour = juce::Colours::violet;
    dial1.setColour(juce::Slider::textBoxTextColourId, textColour);
    dial2.setColour(juce::Slider::textBoxTextColourId, textColour);
    
    
    getLookAndFeel().setColour(juce::Slider::thumbColourId,juce::Colours::crimson);
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (juce::Graphics& g)
{
    

        const juce::Rectangle<int> bounds = getLocalBounds();
        const juce::Rectangle<int> textBounds(
            bounds.getX(),
            bounds.getY() + 2, // decrease this value to lower the text
            bounds.getWidth(),
            bounds.getHeight()
        );

  
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    
    
        // (Our component is opaque, so we must completely fill the background with a solid colour)
    
 
        // Set the background color to white
    
        getLookAndFeel().setColour(juce::ResizableWindow::backgroundColourId, juce::Colours::white);

        // Fill the background with the color
        //g.fillAll(getLookAndFeel().findColour(juce::ResizableWindow::backgroundColourId));
    
    juce::Image background = juce::ImageCache::getFromMemory(BinaryData::rdmoon_jpg, BinaryData::rdmoon_jpgSize);
       g.drawImage(background, getLocalBounds().toFloat());

        g.setFont(juce::Font(57.0f));
        g.setColour(juce::Colours::crimson);
        g.drawText("ONE KNOB V2", textBounds, juce::Justification::centredBottom, true);
    

    
    
        //g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

       // g.setFont (juce::Font (16.0f));
       // g.setColour (juce::Colours::white);
       // g.drawText ("ONE KNOB V2", getLocalBounds(), juce::Justification::centred, true);
    

    
    //g.fillAll(juce::Colours::white);

      //  g.setFont (juce::Font (16.0f));
       // g.setColour (juce::Colours::black);
      //  g.drawText ("ONE KNOB V2", getLocalBounds(), juce::Justification::centred, true);
    
    
    
    
    
    
    //g.fillAll (getLookAndFeel().setColour (juce::ResizableWindow::backgroundColourId, juce::Colours::white));

    //g.setFont (juce::Font (16.0f));
    //g.setColour (juce::Colours::white);
    //g.drawText ("ONE KNOB V2", getLocalBounds(), juce::Justification::centred, true);
}

void MainComponent::resized()
{
    const int border = 20;
    const int dialWidth = getWidth() / 2 - border;
    const int dialHeight = getHeight() - border - 100;
    
    dial1.setBounds(border, border, dialWidth, dialHeight);
    dial2.setBounds(getWidth() / 2, border, dialWidth, dialHeight);
    
    // This is called when the MainComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
}
