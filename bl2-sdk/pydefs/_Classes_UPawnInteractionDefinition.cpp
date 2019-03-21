#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPawnInteractionDefinition()
{
    class_< UPawnInteractionDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UPawnInteractionDefinition", no_init)
        .def_readwrite("InteractDistance", &UPawnInteractionDefinition::InteractDistance)
        .def_readwrite("TouchRadius", &UPawnInteractionDefinition::TouchRadius)
        .def_readwrite("TouchHeight", &UPawnInteractionDefinition::TouchHeight)
        .def_readwrite("OnTouch", &UPawnInteractionDefinition::OnTouch)
        .def_readwrite("OnUnTouch", &UPawnInteractionDefinition::OnUnTouch)
        .def_readwrite("OnUse", &UPawnInteractionDefinition::OnUse)
        .def("StaticClass", &UPawnInteractionDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}