#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UUIWeaponSummary()
{
    class_< UUIWeaponSummary, bases< UUIResourceDataProvider >  , boost::noncopyable>("UUIWeaponSummary", no_init)
        .def_readwrite("ClassPathName", &UUIWeaponSummary::ClassPathName)
        .def_readwrite("FriendlyName", &UUIWeaponSummary::FriendlyName)
        .def_readwrite("WeaponDescription", &UUIWeaponSummary::WeaponDescription)
        .def("StaticClass", &UUIWeaponSummary::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventIsProviderDisabled", &UUIWeaponSummary::eventIsProviderDisabled)
        .staticmethod("StaticClass")
  ;
}