#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowScrollingListDataProviderAudioOptions()
{
    py::class_< UWillowScrollingListDataProviderAudioOptions,  UWillowScrollingListDataProviderOptionsBase   >("UWillowScrollingListDataProviderAudioOptions")
        .def("StaticClass", &UWillowScrollingListDataProviderAudioOptions::StaticClass, py::return_value_policy::reference)
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