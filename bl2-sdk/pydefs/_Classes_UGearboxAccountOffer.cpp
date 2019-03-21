#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxAccountOffer()
{
    class_< UGearboxAccountOffer, bases< UObject >  , boost::noncopyable>("UGearboxAccountOffer", no_init)
        .def_readwrite("TitleEfigs", &UGearboxAccountOffer::TitleEfigs)
        .def_readwrite("DescriptionEfigs", &UGearboxAccountOffer::DescriptionEfigs)
        .def_readwrite("Id", &UGearboxAccountOffer::Id)
        .def_readwrite("DateUnlocked", &UGearboxAccountOffer::DateUnlocked)
        .def("StaticClass", &UGearboxAccountOffer::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}