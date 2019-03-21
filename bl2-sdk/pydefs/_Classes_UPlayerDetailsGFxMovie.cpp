#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPlayerDetailsGFxMovie()
{
    class_< UPlayerDetailsGFxMovie, bases< UWillowGFxMovie >  , boost::noncopyable>("UPlayerDetailsGFxMovie", no_init)
        .def_readwrite("PlayerDetailsObject", &UPlayerDetailsGFxMovie::PlayerDetailsObject)
        .def_readwrite("OwningMovie", &UPlayerDetailsGFxMovie::OwningMovie)
        .def_readonly("UnknownData00", &UPlayerDetailsGFxMovie::UnknownData00)
        .def("StaticClass", &UPlayerDetailsGFxMovie::StaticClass, return_value_policy< reference_existing_object >())
        .def("HandleInputKey", &UPlayerDetailsGFxMovie::HandleInputKey)
        .def("extClosed", &UPlayerDetailsGFxMovie::extClosed)
        .def("extOnLoad", &UPlayerDetailsGFxMovie::extOnLoad)
        .def("eventOnClose", &UPlayerDetailsGFxMovie::eventOnClose)
        .def("eventStart", &UPlayerDetailsGFxMovie::eventStart)
        .def("OnLoad", &UPlayerDetailsGFxMovie::OnLoad)
        .staticmethod("StaticClass")
  ;
}