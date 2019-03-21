#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowScrollingListDataProviderResolutionOptions()
{
    class_< UWillowScrollingListDataProviderResolutionOptions, bases< UWillowScrollingListDataProviderApplyRequiredOption >  , boost::noncopyable>("UWillowScrollingListDataProviderResolutionOptions", no_init)
        .def("StaticClass", &UWillowScrollingListDataProviderResolutionOptions::StaticClass, return_value_policy< reference_existing_object >())
        .def("HandleClick", &UWillowScrollingListDataProviderResolutionOptions::HandleClick)
        .staticmethod("StaticClass")
  ;
}