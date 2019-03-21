#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowScrollingListDataProviderAudioOptions()
{
    class_< UWillowScrollingListDataProviderAudioOptions, bases< UWillowScrollingListDataProviderOptionsBase >  , boost::noncopyable>("UWillowScrollingListDataProviderAudioOptions", no_init)
        .def("StaticClass", &UWillowScrollingListDataProviderAudioOptions::StaticClass, return_value_policy< reference_existing_object >())
        .def("UpdateRealtimeSetting", &UWillowScrollingListDataProviderAudioOptions::UpdateRealtimeSetting)
        .def("StopAllVolumeSounds", &UWillowScrollingListDataProviderAudioOptions::StopAllVolumeSounds)
        .def("CheckStopVolumeSound", &UWillowScrollingListDataProviderAudioOptions::CheckStopVolumeSound)
        .def("HandleSpinnerChange", &UWillowScrollingListDataProviderAudioOptions::HandleSpinnerChange)
        .def("HandleSliderChange", &UWillowScrollingListDataProviderAudioOptions::HandleSliderChange)
        .def("HandleSelectionChange", &UWillowScrollingListDataProviderAudioOptions::HandleSelectionChange)
        .def("HandleClick", &UWillowScrollingListDataProviderAudioOptions::HandleClick)
        .def("OnPop", &UWillowScrollingListDataProviderAudioOptions::OnPop)
        .def("Cleanup", &UWillowScrollingListDataProviderAudioOptions::Cleanup)
        .def("Populate", &UWillowScrollingListDataProviderAudioOptions::Populate)
        .staticmethod("StaticClass")
  ;
}