#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGameResourceDataProvider()
{
    class_< FGameResourceDataProvider >("FGameResourceDataProvider", no_init)
        .def_readwrite("ProviderTag", &FGameResourceDataProvider::ProviderTag)
        .def_readwrite("ProviderClassName", &FGameResourceDataProvider::ProviderClassName)
        .def_readwrite("ProviderClass", &FGameResourceDataProvider::ProviderClass)
  ;
}