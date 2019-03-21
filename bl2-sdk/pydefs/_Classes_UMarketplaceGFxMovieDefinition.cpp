#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMarketplaceGFxMovieDefinition()
{
    class_< UMarketplaceGFxMovieDefinition, bases< UWillowGFxMovie3DDefinition >  , boost::noncopyable>("UMarketplaceGFxMovieDefinition", no_init)
        .def_readwrite("DefaultFilterTag", &UMarketplaceGFxMovieDefinition::DefaultFilterTag)
        .def("StaticClass", &UMarketplaceGFxMovieDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}