#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDlcTmsHolder()
{
    class_< UDlcTmsHolder, bases< UObject >  , boost::noncopyable>("UDlcTmsHolder", no_init)
        .def_readwrite("PremiumCustomizationList", &UDlcTmsHolder::PremiumCustomizationList)
        .def_readwrite("PremiumClassList", &UDlcTmsHolder::PremiumClassList)
        .def("StaticClass", &UDlcTmsHolder::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}