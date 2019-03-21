#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGFxRawData()
{
    class_< UGFxRawData, bases< UObject >  , boost::noncopyable>("UGFxRawData", no_init)
        .def_readwrite("RawData", &UGFxRawData::RawData)
        .def_readwrite("ReferencedSwfs", &UGFxRawData::ReferencedSwfs)
        .def_readwrite("References", &UGFxRawData::References)
        .def_readwrite("UserReferences", &UGFxRawData::UserReferences)
        .def("StaticClass", &UGFxRawData::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}