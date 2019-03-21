#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimNodeBlendList()
{
    class_< UAnimNodeBlendList, bases< UAnimNodeBlendBase >  , boost::noncopyable>("UAnimNodeBlendList", no_init)
        .def_readwrite("TargetWeight", &UAnimNodeBlendList::TargetWeight)
        .def_readwrite("BlendTimeToGo", &UAnimNodeBlendList::BlendTimeToGo)
        .def_readwrite("ActiveChildIndex", &UAnimNodeBlendList::ActiveChildIndex)
        .def_readwrite("SliderPosition", &UAnimNodeBlendList::SliderPosition)
        .def("StaticClass", &UAnimNodeBlendList::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetActiveChild", &UAnimNodeBlendList::SetActiveChild)
        .staticmethod("StaticClass")
  ;
}