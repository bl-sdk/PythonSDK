#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UFrontendMenuGFxObject()
{
    class_< UFrontendMenuGFxObject, bases< UGFxObject >  , boost::noncopyable>("UFrontendMenuGFxObject", no_init)
        .def("StaticClass", &UFrontendMenuGFxObject::StaticClass, return_value_policy< reference_existing_object >())
        .def("FadeLobbyDeco", &UFrontendMenuGFxObject::FadeLobbyDeco)
        .def("SetDecoVisible", &UFrontendMenuGFxObject::SetDecoVisible)
        .def("ApplyPriorityVisibilityEffect", &UFrontendMenuGFxObject::ApplyPriorityVisibilityEffect)
        .def("ApplyPriorityBlurEffect", &UFrontendMenuGFxObject::ApplyPriorityBlurEffect)
        .staticmethod("StaticClass")
  ;
}