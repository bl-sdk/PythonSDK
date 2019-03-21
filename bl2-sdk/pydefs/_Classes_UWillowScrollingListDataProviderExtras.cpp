#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowScrollingListDataProviderExtras()
{
    class_< UWillowScrollingListDataProviderExtras, bases< UWillowScrollingListDataProviderBase >  , boost::noncopyable>("UWillowScrollingListDataProviderExtras", no_init)
        .def("StaticClass", &UWillowScrollingListDataProviderExtras::StaticClass, return_value_policy< reference_existing_object >())
        .def("Populate", &UWillowScrollingListDataProviderExtras::Populate)
        .def("HandleClick", &UWillowScrollingListDataProviderExtras::HandleClick)
        .staticmethod("StaticClass")
  ;
}