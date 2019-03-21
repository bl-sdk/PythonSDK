#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UOnlineNewsInterface()
{
    class_< UOnlineNewsInterface, bases< UInterface >  , boost::noncopyable>("UOnlineNewsInterface", no_init)
        .def("StaticClass", &UOnlineNewsInterface::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetNews", &UOnlineNewsInterface::GetNews)
        .def("ClearReadNewsCompletedDelegate", &UOnlineNewsInterface::ClearReadNewsCompletedDelegate)
        .def("AddReadNewsCompletedDelegate", &UOnlineNewsInterface::AddReadNewsCompletedDelegate)
        .def("OnReadNewsCompleted", &UOnlineNewsInterface::OnReadNewsCompleted)
        .def("ReadNews", &UOnlineNewsInterface::ReadNews)
        .staticmethod("StaticClass")
  ;
}