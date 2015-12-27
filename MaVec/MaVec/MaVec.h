//
//  MaVec.h
//  MaVec
//
//  Created by Andrew McKnight on 12/26/15.
//
//  Copyright © 2015 AMProductions
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.

//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//  SOFTWARE.
//

#import <Foundation/Foundation.h>

//! Project version number for MaVec.
FOUNDATION_EXPORT double MaVecVersionNumber;

//! Project version string for MCKNumerics.
FOUNDATION_EXPORT const unsigned char MaVecVersionString[];

#import "MAVMatrix+MAVMatrixConverter.h"
#import "MAVMatrix+MAVMatrixFactory.h"
#import "NSData+MAVMatrixData.h"
#import "MAVEigendecomposition.h"
#import "MAVLUFactorization.h"
#import "MAVMatrix.h"
#import "MAVMutableMatrix.h"
#import "MAVQRFactorization.h"
#import "MAVSingularValueDecomposition.h"
#import "MAVConstants.h"
#import "MAVTypedefs.h"
#import "MAVMutableVector.h"
#import "MAVVector.h"
