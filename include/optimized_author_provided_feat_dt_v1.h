#pragma once

namespace Eloquent {
    namespace ML {
        namespace Port {
            class DecisionTree {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        if (x[2] <= 59.5) {
                            if (x[3] <= 59.5) {
                                if (x[3] <= 44.5) {
                                    if (x[2] <= 44.5) {
                                        if (x[8] <= 100.5) {
                                            return 2;
                                        }

                                        else {
                                            return 0;
                                        }
                                    }

                                    else {
                                        return 0;
                                    }
                                }

                                else {
                                    if (x[0] <= 15.5) {
                                        return 2;
                                    }

                                    else {
                                        return 2;
                                    }
                                }
                            }

                            else {
                                return 0;
                            }
                        }

                        else {
                            if (x[2] <= 100.5) {
                                if (x[3] <= 100.5) {
                                    if (x[0] <= 66.5) {
                                        if (x[3] <= 59.5) {
                                            return 0;
                                        }

                                        else {
                                            if (x[8] <= 115.0) {
                                                if (x[8] <= -18.5) {
                                                    return 0;
                                                }

                                                else {
                                                    if (x[3] <= 87.5) {
                                                        if (x[2] <= 87.5) {
                                                            return 3;
                                                        }

                                                        else {
                                                            return 0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 87.5) {
                                                            return 0;
                                                        }

                                                        else {
                                                            return 3;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                return 0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 76.5) {
                                            if (x[2] <= 93.5) {
                                                if (x[3] <= 59.5) {
                                                    return 0;
                                                }

                                                else {
                                                    if (x[3] <= 93.5) {
                                                        if (x[8] <= 124.5) {
                                                            if (x[8] <= -10.5) {
                                                                return 0;
                                                            }

                                                            else {
                                                                return 3;
                                                            }
                                                        }

                                                        else {
                                                            if (x[5] <= 436.0) {
                                                                return 0;
                                                            }

                                                            else {
                                                                return 3;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        return 0;
                                                    }
                                                }
                                            }

                                            else {
                                                return 0;
                                            }
                                        }

                                        else {
                                            if (x[8] <= 7.5) {
                                                return 0;
                                            }

                                            else {
                                                if (x[3] <= 60.5) {
                                                    return 0;
                                                }

                                                else {
                                                    if (x[2] <= 72.5) {
                                                        if (x[3] <= 73.5) {
                                                            return 3;
                                                        }

                                                        else {
                                                            return 0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[3] <= 72.5) {
                                                            return 0;
                                                        }

                                                        else {
                                                            if (x[8] <= 78.0) {
                                                                return 3;
                                                            }

                                                            else {
                                                                return 0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    return 0;
                                }
                            }

                            else {
                                if (x[0] <= 67.5) {
                                    if (x[0] <= 49.5) {
                                        return 1;
                                    }

                                    else {
                                        if (x[3] <= 126.5) {
                                            if (x[4] <= 89.0) {
                                                return 1;
                                            }

                                            else {
                                                return 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 127.5) {
                                                return 0;
                                            }

                                            else {
                                                return 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 130.5) {
                                        if (x[3] <= 100.5) {
                                            if (x[9] <= 24.5) {
                                                if (x[7] <= -61.5) {
                                                    return 1;
                                                }

                                                else {
                                                    return 0;
                                                }
                                            }

                                            else {
                                                return 1;
                                            }
                                        }

                                        else {
                                            if (x[8] <= 203.5) {
                                                if (x[8] <= 9.5) {
                                                    if (x[7] <= 57.5) {
                                                        return 1;
                                                    }

                                                    else {
                                                        return 0;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 114.5) {
                                                        if (x[2] <= 114.5) {
                                                            return 1;
                                                        }

                                                        else {
                                                            if (x[10] <= 211.5) {
                                                                return 1;
                                                            }

                                                            else {
                                                                return 0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 113.0) {
                                                            return 0;
                                                        }

                                                        else {
                                                            if (x[12] <= 396.5) {
                                                                return 1;
                                                            }

                                                            else {
                                                                return 0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                return 0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 134.5) {
                                            return 0;
                                        }

                                        else {
                                            if (x[2] <= 169.5) {
                                                if (x[3] <= 139.5) {
                                                    return 1;
                                                }

                                                else {
                                                    return 0;
                                                }
                                            }

                                            else {
                                                if (x[4] <= 83.0) {
                                                    return 0;
                                                }

                                                else {
                                                    return 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                };
            }
        }
    }