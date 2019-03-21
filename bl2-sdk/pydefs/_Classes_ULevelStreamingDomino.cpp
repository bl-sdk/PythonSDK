#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULevelStreamingDomino()
{
    class_< ULevelStreamingDomino, bases< ULevelStreamingKismet >  , boost::noncopyable>("ULevelStreamingDomino", no_init)
        .def_readwrite("TilePossibilities", &ULevelStreamingDomino::TilePossibilities)
        .def("StaticClass", &ULevelStreamingDomino::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}