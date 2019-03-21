#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FOfferResult()
{
    class_< FOfferResult >("FOfferResult", no_init)
        .def_readwrite("TitleEfigs", &FOfferResult::TitleEfigs)
        .def_readwrite("DescriptionEfigs", &FOfferResult::DescriptionEfigs)
        .def_readwrite("Id", &FOfferResult::Id)
        .def_readwrite("DateUnlocked", &FOfferResult::DateUnlocked)
  ;
}