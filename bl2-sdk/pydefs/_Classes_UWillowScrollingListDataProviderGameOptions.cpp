#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowScrollingListDataProviderGameOptions()
{
    class_< UWillowScrollingListDataProviderGameOptions, bases< UWillowScrollingListDataProviderOptionsBase >  , boost::noncopyable>("UWillowScrollingListDataProviderGameOptions", no_init)
        .def("StaticClass", &UWillowScrollingListDataProviderGameOptions::StaticClass, return_value_policy< reference_existing_object >())
        .def("Populate", &UWillowScrollingListDataProviderGameOptions::Populate)
        .staticmethod("StaticClass")
  ;
}