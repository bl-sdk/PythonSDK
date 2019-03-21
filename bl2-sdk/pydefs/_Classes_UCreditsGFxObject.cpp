#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCreditsGFxObject()
{
    class_< UCreditsGFxObject, bases< UGFxObject >  , boost::noncopyable>("UCreditsGFxObject", no_init)
        .def_readwrite("CreditsDef", &UCreditsGFxObject::CreditsDef)
        .def_readwrite("CachedDelta", &UCreditsGFxObject::CachedDelta)
        .def("StaticClass", &UCreditsGFxObject::StaticClass, return_value_policy< reference_existing_object >())
        .def("UpdateDelta", &UCreditsGFxObject::UpdateDelta)
        .def("StartCreditScroll", &UCreditsGFxObject::StartCreditScroll)
        .def("Init", &UCreditsGFxObject::Init)
        .staticmethod("StaticClass")
  ;
}