#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowScrollingListDataProviderPause()
{
    class_< UWillowScrollingListDataProviderPause, bases< UWillowScrollingListDataProviderBase >  , boost::noncopyable>("UWillowScrollingListDataProviderPause", no_init)
        .def("StaticClass", &UWillowScrollingListDataProviderPause::StaticClass, return_value_policy< reference_existing_object >())
        .def("Populate", &UWillowScrollingListDataProviderPause::Populate)
        .def("HandleClick", &UWillowScrollingListDataProviderPause::HandleClick)
        .staticmethod("StaticClass")
  ;
}