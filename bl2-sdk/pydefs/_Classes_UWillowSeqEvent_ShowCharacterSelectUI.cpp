#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_ShowCharacterSelectUI()
{
    class_< UWillowSeqEvent_ShowCharacterSelectUI, bases< USequenceEvent >  , boost::noncopyable>("UWillowSeqEvent_ShowCharacterSelectUI", no_init)
        .def("StaticClass", &UWillowSeqEvent_ShowCharacterSelectUI::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}