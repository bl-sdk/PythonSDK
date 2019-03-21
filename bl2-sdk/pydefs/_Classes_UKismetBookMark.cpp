#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UKismetBookMark()
{
    class_< UKismetBookMark, bases< UBookMark2D >  , boost::noncopyable>("UKismetBookMark", no_init)
        .def_readwrite("BookMarkSequencePathName", &UKismetBookMark::BookMarkSequencePathName)
        .def("StaticClass", &UKismetBookMark::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}